void home()
{
    glPushMatrix();
    glTranslated(-10,-10,-10);
    glScaled(70,1,30);

   /* glMaterialfv(GL_FRONT, GL_AMBIENT, home1_am);
   glMaterialfv(GL_FRONT, GL_DIFFUSE, home1_diff);
   glMaterialfv(GL_FRONT, GL_SPECULAR, home1_spec);
   glMaterialfv(GL_FRONT, GL_SHININESS, high_shininess);*/
   glBindTexture(GL_TEXTURE_2D,2);
	glEnable(GL_TEXTURE_2D);
    quad();
     glDisable(GL_TEXTURE_2D);

    glPopMatrix();


    glPushMatrix();
    glTranslated(-10,-10,-10);
    glScaled(70,30,1);




   glPushMatrix();

	glTranslated(.8,.5,2);
	glRotated(90,0,1,0);
	glScaled(.17,.37,.17);
   glBindTexture(GL_TEXTURE_2D,5);
	glEnable(GL_TEXTURE_2D);
	glRotated(90,0,1,0);
    quad();
    glDisable(GL_TEXTURE_2D);
   glPopMatrix();

    /*glMaterialfv(GL_FRONT, GL_AMBIENT, home1_am);
   glMaterialfv(GL_FRONT, GL_DIFFUSE, home1_diff);
   glMaterialfv(GL_FRONT, GL_SPECULAR, home1_spec);
   glMaterialfv(GL_FRONT, GL_SHININESS, high_shininess);*/
   glBindTexture(GL_TEXTURE_2D,2);
	glEnable(GL_TEXTURE_2D);

    quad();
     glDisable(GL_TEXTURE_2D);


    glPopMatrix();


    glPushMatrix();
    glTranslated(-10,-10,-10);
    glScaled(1,30,30);
   /* glMaterialfv(GL_FRONT, GL_AMBIENT, home2_am);
   glMaterialfv(GL_FRONT, GL_DIFFUSE, home2_diff);
   glMaterialfv(GL_FRONT, GL_SPECULAR, home2_spec);
   glMaterialfv(GL_FRONT, GL_SHININESS, high_shininess);*/
   glBindTexture(GL_TEXTURE_2D,2);
	glEnable(GL_TEXTURE_2D);
    quad();
      glDisable(GL_TEXTURE_2D);


    /*glPushMatrix();
     glTranslated(-100,-10,-10);
    glScaled(5,5,5);
    glRotated(90,1,0,0);

     glBindTexture(GL_TEXTURE_2D,3);
	glEnable(GL_TEXTURE_2D);
    quad();
    glDisable(GL_TEXTURE_2D);
    glPopMatrix();*/


     /*glPushMatrix();
    glTranslated(-10,-10,-10);
    glScaled(1,30,30);
     quad();
    glPopMatrix();*/



    glPopMatrix();
}


