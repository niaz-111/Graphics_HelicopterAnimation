void Helicopter (const double a)
{
    glPushMatrix();
    glMaterialf(GL_FRONT, GL_SHININESS, j_s);

    glPushMatrix();
    glBegin(GL_POLYGON);

    //outer back
    //glColor3d(0,0,.5);
    glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient1);
   glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse1);
   glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular1);
   //glMaterialfv(GL_FRONT, GL_SHININESS, high_shininess);
    glVertex3f(0.0,0.0,0.0);
    glVertex3f(0.0,2.0,0.0);
    glVertex3f(4.0,4.0,0.0);
    glVertex3f(7.0,4.0,0.0);
    glVertex3f(7.0,0.0,0.0);
    glEnd();
    glBegin(GL_POLYGON);

    //inner back
    glColor3d(1,0,0);
    glVertex3f(0.0,0.0,0.0);
    glVertex3f(7.0,0.0,0.0);
    glVertex3f(7.0,4.0,0.0);
    glVertex3f(4.0,4.0,0.0);
    glVertex3f(0.0,2.0,0.0);



    glEnd();
    //outer front
    glBegin(GL_POLYGON);
    //glColor3d(0,0,.5);
    glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient1);
   glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse1);
   glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular1);
   //glMaterialfv(GL_FRONT, GL_SHININESS, high_shininess);
    glVertex3f(0.0,0.0,4.0);
    glVertex3f(7.0,0.0,4.0);
    glVertex3f(7.0,4.0,4.0);
    glVertex3f(4.0,4.0,4.0);
    glVertex3f(0.0,2.0,4.0);

    glEnd();

    //inner back
    glBegin(GL_POLYGON);
    glColor3d(1,0,0);
    glVertex3f(0.0,0.0,4.0);
    glVertex3f(0.0,2.0,4.0);
    glVertex3f(4.0,4.0,4.0);
    glVertex3f(7.0,4.0,4.0);
    glVertex3f(7.0,0.0,4.0);



    glEnd();

    glPopMatrix();


    //plane back
    glPushMatrix();
    glTranslated(1,-1.7,-.75);
    glScaled(5.0,.2,1.5);
    //glColor3f(0,1,0);
    glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient1);
   glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse1);
   glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular1);
   //glMaterialfv(GL_FRONT, GL_SHININESS, high_shininess);
    quad();
    glPopMatrix();

    //stand back
    glPushMatrix();
    glTranslated(2,-1.5,-.15);
    glScaled(3.0,1.5,.3);
    //glColor3f(1,1,0);
    glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient2);
   glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse2);
   glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular2);
   //glMaterialfv(GL_FRONT, GL_SHININESS, high_shininess);
    quad();
    glPopMatrix();


    //plane front
    glPushMatrix();
    glTranslated(1,-1.7,3.25);
    glScaled(5.0,.2,1.5);
    //glColor3f(0,1,0);
    glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient1);
   glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse1);
   glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular1);
  // glMaterialfv(GL_FRONT, GL_SHININESS, high_shininess);
    quad();
    glPopMatrix();

    //stand front
    glPushMatrix();
    glTranslated(2,-1.5,3.85);
    glScaled(3.0,1.5,.3);
   glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient2);
   glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse2);
   glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular2);
  // glMaterialfv(GL_FRONT, GL_SHININESS, high_shininess);
    //glColor3f(1,1,0);
    quad();
    glPopMatrix();

    //front
    glPushMatrix();
    glTranslated(0,0,0);
    glScaled(0,2,4);
    glColor3f(1,0,1);
    quad();
    glPopMatrix();

    //first cover
     glPushMatrix();
    glTranslated(0.0,2.0,0);
    glRotated(26.56,0,0,1);
    glScaled(2.47,0.05,4);
    glColor3f(0,1,0);
    quad();
    glPopMatrix();

    //second cover
   glPushMatrix();
   glTranslated(3,3.5,0);
   glRotated(26.56,0,0,1);
   glScaled(1.13,.05,4);
   glColor3f(0,1,0);
   quad();
   glPopMatrix();

   //top
   glPushMatrix();
   glTranslated(4,4,0);
   glScaled(3,.05,4);
   //glColor3f(0,.8,0);
   glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient1);
   glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse1);
   glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular1);
  // glMaterialfv(GL_FRONT, GL_SHININESS, high_shininess);
   quad();
   glPopMatrix();

   //back
   glPushMatrix();
   glTranslated(7,0,0);
   glScaled(0,4,4);
   //glColor3f(0,0,0.8);
   glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient2);
   glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse2);
   glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular2);
  // glMaterialfv(GL_FRONT, GL_SHININESS, high_shininess);
   quad();
   glPopMatrix();

   //bottom
   glPushMatrix();
   glTranslated(0,0,0);
   glScaled(7,0,4);
   glColor3f(0,0,0.7);
   quad();
   glPopMatrix();

   //tail
   glPushMatrix();
    glTranslated(7.01,1.5,1.5);
    glScaled(4,1,1);
    glColor3f(1,1,0);
    quad();
    glPopMatrix();

    glPushMatrix();
    glTranslated(11.02,1.5,1.75);
    glRotated(45.0,0,0,1);
    glScaled(3,1,.5);
    glColor3f(1,1,0);
    quad();
    glPopMatrix();

    glPushMatrix();
     glTranslated(12.8,3.98,1.8);
      glRotated(180,0,0,1);
    glRotated(90,0,0,1);
    glRotated(45,0,0,1);
     glRotated(90,1,0,0);
     glRotated(180,0,1,0);
     glScaled(1,.5,1);
    glColor3f(1,1,0);
    halfCylinder();
    glPopMatrix();

    //wing handle
    glPushMatrix();
     glTranslated(5.5,4,2);
    glScaled(.25,1.25,.25);
    glColor3d(.8,0,.2);
    Cylinder();

    glPopMatrix();

    //wing
    glPushMatrix();
    glTranslated(5.5,4,2);
    glRotated(w*a*5,0,1,0);
    glTranslated(-5.5,-4,-2);
    glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient1);
   glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse1);
   glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular1);
   //glMaterialfv(GL_FRONT, GL_SHININESS, high_shininess);
    wing();
    glPopMatrix();


    //propeller
    glPushMatrix();
     glTranslated(5.5,4,2);
    glRotated(90,1,0,0);
    glTranslated(-5.5,-4,-2);
    glTranslated(12.8,3.98,1.8);
    glRotated(w*a*5,0,1,0);
    glScaled(.5,.5,.5);
    glTranslated(-5.5,-4,-2);

    wing();
    glPopMatrix();

    //propeller handle
    glPushMatrix();
    glTranslated(12.8,3.98,2.2);
    glRotated(90,1,0,0);
    glScaled(.5,.4,.5);
    glColor3f(0,.75,0);
    Cylinder();
    glPopMatrix();


    glPopMatrix();





}

