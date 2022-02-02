void wing ()
{

     //wing1
    glPushMatrix();

    glTranslated(5,5.25,-.5);
    glScaled(1,.25,5);
    glColor3d(0,.75,0);
    quad();
    //wing();
    glPopMatrix();

    glPushMatrix();
    glTranslated(5.5,5.25,4.5);
    glScaled(1,.25,1);
    glColor3d(0,.75,0);
    halfCylinder();
    glPopMatrix();

    glPushMatrix();
    glTranslated(5.5,5.25,-.5);
    glRotated(180,1,0,0);
    glScaled(1,-.25,1);
    glColor3d(0,0.75,0);
    halfCylinder();
    glPopMatrix();





    //wing2
     glPushMatrix();
    glTranslated(3,5.25,1.5);
    glScaled(5,.25,1);
    glColor3d(0,.75,0);
    quad();
   // wing();
    glPopMatrix();

    glPushMatrix();
    glTranslated(3,5.25,2);
    glRotated(180,0,1,0);
    glRotated(90,0,1,0);
    glScaled(1,.25,1);
    glColor3d(0,.75,0);
    halfCylinder();
    glPopMatrix();

    glPushMatrix();
    glTranslated(8,5.25,2);
    glRotated(90,0,1,0);
    glScaled(1,.25,1);
    glColor3d(0,0.75,0);
    halfCylinder();
    glPopMatrix();



}

