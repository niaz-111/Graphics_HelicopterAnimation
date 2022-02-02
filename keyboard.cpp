


static void key(unsigned char key, int x, int y)
{
    switch (key)
    {
        case 'q':
            exit(0);
            break;
        case 'j':
            degree+=2.5;
            break;
        case 'J':
            degree-=2.5;
            break;
        case 'l':
            degree1+=2.5;
            break;
        case 'L':
            degree1-=2.5;
            break;
        case 'k':
            degree2+=2.5;
            break;
        case 'K':
            degree2-=2.5;
            break;


        case '+':
            sz+=.005;
            break;
     case '-':
            sz-=.005;
            break;



    case 'd':
        l+=.1;
        break;
    case 's':
        r+=.1;
        break;
    case 'a':
        f+=.1;
        break;
     case 'D':
        l-=.1;
        break;
    case 'S':
        r-=.1;
        break;
    case 'A':
        f-=.1;
        break;

    case 'r':
        w=0;
        break;

    case 'R':
        w=1;
        break;

   case 'w':
        camRoll -= 5;
        break;
    case 'W':
        camRoll += 5;
        break;


     case 'e':
        camTheta -= .1;
        camZ=camRadius*cos(camTheta);
        camX=camRadius*sin(camTheta);
        break;
    case 'E':
        camTheta += .1;
        camZ=camRadius*cos(camTheta);
        camX=camRadius*sin(camTheta);
        break;

    case 'G':
        camRadius-=.5;
        break;

    case 'g':
         camRadius+=.5;
         break;

    case  'Y':
        if(1)
       {
        tp+=.1;
        camCenterY=3*sin(tp);
        //camCenterZ=3*cos(tp);
       }
        break;
    case 'y':
        tp-=.1;
        camCenterY=3*sin(tp);
        //camCenterZ=3*sin(tp);
        break;

    case 'T':
        if(1)
       {
        tt+=.1;
        camCenterX=3*sin(tt);
        //camCenterZ=cos(tp);
       }
        break;
    case 't':
          if(1)
       {
        tt-=.1;
        camCenterX=3*sin(tt);
        //camCenterZ=cos(tp);
       }

    case 'i':
        if(o==0)
        {
            o=1;
            glDisable(GL_LIGHT0);

        }
        else
        {
            o=0;
            glEnable(GL_LIGHT0);

        }
        break;

    case 'u':
         if(i==0)
        {
            i=1;
            glDisable(GL_LIGHT1);

        }
        else
        {
            i=0;
             glEnable(GL_LIGHT1);

        }
        break;



    case 'f':
        j_s+=5.0f;
          glutPostRedisplay();
        break;


        case 'F':
        j_s-=5.0f;
         glutPostRedisplay();
        break;

        case 'x':
             if (spot_angle > 0.0) spot_angle -= 1.0;
             break;
        case  'X':
            if (spot_angle < 90.0) spot_angle += 1.0;
            break;


          case 'z':
 		 if (spot_Exponent > 0.0) spot_Exponent -= 0.1;
		 break;
	  case 'Z':
 		 spot_Exponent += 0.1;
		 break;

      case '4':
        xmove-=0.1;
        break;

      case '6':
        xmove+=0.1;
        break;

         case '8':
        ymove-=0.1;
        break;

      case '2':
        ymove+=0.1;
        break;

      case 'c':
        c-=10;
        break;
      case 'C':
        c+=10;
        break;




    //eye circular
    /*case 'u':
        camTheta += .1;
        camY=camRadius*cos(camTheta);
        camZ=camRadius*sin(camTheta);
        break;*/


    }

    glutPostRedisplay();
}
