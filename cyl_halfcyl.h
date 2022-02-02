void halfCylinder()
{
   glBegin(GL_LINES);
        double m,r=.5,h=1;
        for(int i=0;i<=180;i++)
        {
            m = i*3.1416/180;
            glVertex3f(r*cos(m),h,r*sin(m));
            glVertex3f(r*cos(m),0,r*sin(m));

            glVertex3f(0,h,0);
            glVertex3f(r*cos(m),h,r*sin(m));

            glVertex3f(0,0,0);
            glVertex3f(r*cos(m),0,r*sin(m));


        }

    glEnd();

}


void Cylinder ()
{
    glBegin(GL_LINES);
         int total = 360;

        double m,r=.5,h=1;


        for(int i=0;i<=360;i++)
        {
            m = i*3.1416/180;

            glVertex3f(r*cos(m),h,r*sin(m));
            glVertex3f(r*cos(m),0,r*sin(m));

            glVertex3f(0,h,0);
            glVertex3f(r*cos(m),h,r*sin(m));

            glVertex3f(0,0,0);
            glVertex3f(r*cos(m),0,r*sin(m));


        }

    glEnd();
}

