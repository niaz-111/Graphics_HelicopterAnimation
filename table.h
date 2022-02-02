void table()
{
   // glMaterialfv(GL_FRONT, GL_SHININESS,jack_shininess);
    glBindTexture(GL_TEXTURE_2D,2);
	glEnable(GL_TEXTURE_2D);
   //top
   glPushMatrix();
   //glTranslated();
   glScaled(30,1,15);
  /* glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient2);
   glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse2);
   glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular2);*/
  // glMaterialfv(GL_FRONT, GL_SHININESS, high_shininess);
   quad();
   glDisable(GL_TEXTURE_2D);
   glPopMatrix();

   glPushMatrix();
   glTranslated(1,-.01,1);
   glScaled(2,-10,2);
   /*glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient2);
   glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse2);
   glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular2);*/
   //glMaterialfv(GL_FRONT, GL_SHININESS, high_shininess);
   quad();
   glPopMatrix();

   glPushMatrix();
   glTranslated(27,-.01,1);
   glScaled(2,-10,2);
   /*glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient2);
   glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse2);
   glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular2);*/
   //glMaterialfv(GL_FRONT, GL_SHININESS, high_shininess);
   quad();
   glPopMatrix();


   glPushMatrix();
   glTranslated(1,-.01,12);
   glScaled(2,-10,2);
   /*glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient2);
   glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse2);
   glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular2);*/
   glMaterialfv(GL_FRONT, GL_SHININESS, high_shininess);
   quad();
   glPopMatrix();

   glPushMatrix();
   glTranslated(27,-.01,12);
   glScaled(2,-10,2);
   /*glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient2);
   glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse2);
   glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular2);
   glMaterialfv(GL_FRONT, GL_SHININESS, high_shininess);*/
   quad();



   glPopMatrix();

}
