void sphere()
{
    glPushMatrix();
    glScaled(1,4.5,1);
    glutSolidSphere(1,slices,stacks);
    glPopMatrix();

    glPushMatrix();
    glTranslated(0,5.5,0);
   /* glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient1);
    glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse1);
    glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular1);
    //glMaterialfv(GL_FRONT, GL_SHININESS, high_shininess);*/
    glutSolidSphere(1.0,slices,stacks);
    glPopMatrix();

    glPushMatrix();
    glTranslated(0,-5.5,0);
    /*glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient1);
    glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse1);
    glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular1);*/
    //glMaterialfv(GL_FRONT, GL_SHININESS, high_shininess);
    glutSolidSphere(1.0,slices,stacks);
    glPopMatrix();



}


