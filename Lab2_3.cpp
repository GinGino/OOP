//---------------------------------------------------------------------------

#pragma hdrstop

//---------------------------------------------------------------------------

#pragma argsused
#include <sstream.h>
#include <string.h>
#include <iostream.h>
#include <fstream.h>

string program_name( "our_program" );
string version("0.01");
string mumble( int *array, int size )
{
   if ( ! array ) {
      ostringstream out_message;
      out_message << "������: "
                  << program_name << "--" << version
                  << ": " << __FILE__ << ": " << __LINE__
                  << " -- ��������� ����� 0; "
                  << " � ������ ���������� ������.\n";
      // ���������� ������, � ������� ��������� ���������
      return out_message.str();
   }
 }

int main()
{     int * mass=0;
     string rey;
     rey=mumble(mass,5);
     cout<<rey;
     getchar();
}


//---------------------------------------------------------------------------

