//
//  10.cpp
//  OS
//
//  Created by Usman on 02/04/2022.
//

#include <stdio.h>
#include <unistd.h>
int main()
{
int i;
for (i = 0; i < 4; i++)
fork();
return 0;
}
