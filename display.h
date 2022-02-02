static void display(void)
{
    const double t = glutGet(GLUT_ELAPSED_TIME) / 1000.0;
    const double a = t*90.0;

    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);


    float h= glutGet(GLUT_WINDOW_HEIGHT);
    float w= glutGet(GLUT_WINDOW_WIDTH);

    glLoadIdentity();
    gluLookAt (0.0, 4.0, 6.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);
    /// all the camera calculations happen here

    //glTranslated(l,r,f);
    //cameraMagic();

    glColor3d(1,0,0);

    glPushMatrix();

    //glViewport(0,0,w/2,h);
    glViewport(0,0,w,h);
    glLoadIdentity();
    //gluLookAt(0.0, 0.0, -3.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);
    glTranslated(l,r,f);
    //glRotated(90,0,1,0);
    cameraMagic();
    glRotated(degree,1,0,0);
    glRotated(degree1,0,1,0);
    glRotated(degree2,0,0,1);

    glScalef(sz,sz,sz);



     jackk();

    /*glMaterialfv(GL_FRONT, GL_AMBIENT,   mat_ambient1);
    glMaterialfv(GL_FRONT, GL_DIFFUSE,   mat_diffuse1);
    glMaterialfv(GL_FRONT, GL_SPECULAR,  mat_specular1);*/
    //glMaterialf(GL_FRONT, GL_SHININESS, h_s);
    Helicopterr(a);

    glTranslated(-5,-3,-5);
    table();
    home();




    glPushMatrix();
            glTranslated(-4.99,0.105,7);
            glRotated(90,0,1,0);
             glRotated(90,0,0,1);
            KochCurve(Depth);
    glPopMatrix();


     glPopMatrix();







   /* v2

     glPushMatrix();

    glViewport(w/2+5,0,w/2,h);
    glLoadIdentity();
    //gluLookAt(0.0, 0.0, -3.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);
    glTranslated(l,r,f);
    //glRotated(90,0,1,0);
    cameraMagic();
    glRotated(degree,1,0,0);
    glRotated(degree1,0,1,0);
    glRotated(degree2,0,0,1);

    glScalef(sz,sz,sz);



     jack();

    /*glMaterialfv(GL_FRONT, GL_AMBIENT,   mat_ambient1);
    glMaterialfv(GL_FRONT, GL_DIFFUSE,   mat_diffuse1);
    glMaterialfv(GL_FRONT, GL_SPECULAR,  mat_specular1);*/
    //glMaterialf(GL_FRONT, GL_SHININESS, h_s);
  /*  Helicopter(a);

    glTranslated(-5,-3,-5);
    table();
    home();




    glPushMatrix();
            glTranslated(-4.99,0.105,7);
            glRotated(90,0,1,0);
             glRotated(90,0,0,1);
            KochCurve(Depth);
    glPopMatrix();


     glPopMatrix();
   v2  */










    glPushMatrix();
    glTranslatef(xmove,0,ymove);
    glRotatef(c,0,0,1);

   /* glPushMatrix();
   glDisable(GL_LIGHT1);
   glRotatef(-90.0, 1.0, 0.0, 0.0);
  // glScaled(1,1,1);
   glColor3f(1.0, 1.0, 1.0);
   glutWireCone(3.0 * tan( spot_angle/180.0 * PI ), 3.0, 20, 20);
  glEnable(GL_LIGHT1);
   glPopMatrix();*/


    glLightfv(GL_LIGHT1, GL_AMBIENT,  light_ambient);
    glLightfv(GL_LIGHT1, GL_DIFFUSE,  light_diffuse);
    glLightfv(GL_LIGHT1, GL_SPECULAR, light_specular);
    glLightfv(GL_LIGHT1, GL_POSITION, light_position1);
    // glLightf(GL_LIGHT1, GL_SPOT_EXPONENT, spot_Exponent);
    glLightf(GL_LIGHT1, GL_SPOT_CUTOFF, spot_angle);
     glLightfv(GL_LIGHT1, GL_SPOT_DIRECTION,spot_direction);



     glPopMatrix();

    glutSwapBuffers();
}
