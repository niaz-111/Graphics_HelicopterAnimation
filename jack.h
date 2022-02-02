void jack()
{

    glPushMatrix();
    glTranslated(18,2,6);
    glScaled(.7,.7,.7);
    //glMaterialf(GL_FRONT, GL_SHININESS, j_s);


    glPushMatrix();
    glRotated(41.81,1,0,0);
    /*glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient2);
    glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse2);
    glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular2);*/
    //glMaterialfv(GL_FRONT, GL_SHININESS, high_shininess);
    sphere();
    glPopMatrix();

    glPushMatrix();
    glRotated(120,0,1,0);
    glRotated(41.81,1,0,0);
    /*glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient2);
    glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse2);
    glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular2);*/
    //glMaterialfv(GL_FRONT, GL_SHININESS, high_shininess);
    sphere();
    glPopMatrix();

    glPushMatrix();
    glRotated(240,0,1,0);
    glRotated(41.81,1,0,0);
    /*glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient2);
    glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse2);
    glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular2);*/
    //glMaterialfv(GL_FRONT, GL_SHININESS, high_shininess);
    sphere();
    glPopMatrix();

    glPopMatrix();

}

