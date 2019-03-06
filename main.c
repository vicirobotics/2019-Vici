#include <kipr/botball.h>

int main()
{
    while(create_connect()){}
     //wait_for_light(0);
  shut_down_in(115);
    enable_servos();
    set_servo_position(0,1636);
    set_servo_position(3,129);
    msleep(1000);
    create_drive_direct(-100,0);
     wait_for_milliseconds(650);
    create_stop();
    wait_for_milliseconds(4000);
    int counter;
    counter= 129;
	set_servo_position(3,counter);
	while(counter<450)
	{
		msleep(50);
		counter=counter +10;
		set_servo_position(3,counter);
	}
    msleep(1000);
    create_drive_direct(100,0);
    wait_for_milliseconds(775);
    create_stop();
    msleep(1000);
    
    counter= 1764;
	set_servo_position(0,counter);
	while(counter>1500)
	{
		msleep(50);
		counter=counter -10;
		set_servo_position(0,counter);
	}
    msleep(1000);
     counter= 450;
	set_servo_position(3,counter);
	while(counter<750)
	{
		msleep(50);
		counter=counter +10;
		set_servo_position(3,counter);
	}
    msleep(1000);
    create_drive_direct(-100,-100);
    wait_for_milliseconds(1700);
    create_stop();
    
     counter= 750;
	set_servo_position(3,counter);
	while(counter<1000)
	{
		msleep(50);
		counter=counter +10;
		set_servo_position(3,counter);
	}
    msleep(1000);
    counter= 1500;
	set_servo_position(0,counter);
	while(counter>1250)
	{
		msleep(50);
		counter=counter -10;
		set_servo_position(0,counter);
	}
    counter= 1000;
	set_servo_position(3,counter);
	while(counter<1250)
	{
		msleep(50);
		counter=counter +10;
		set_servo_position(3,counter);
	}
    create_drive_direct(-100,-100);
    wait_for_milliseconds(1200);
    create_stop();
    counter= 1250;
	set_servo_position(3,counter);
	while(counter<1450)
	{
		msleep(50);
		counter=counter +10;
		set_servo_position(3,counter);
	}
    
    counter= 1250;
	set_servo_position(0,counter);
	while(counter>1100)
	{
		msleep(50);
		counter=counter -10;
		set_servo_position(0,counter);
	}
     counter= 1450;
	set_servo_position(3,counter);
	while(counter<1700)
	{
		msleep(50);
		counter=counter +10;
		set_servo_position(3,counter);
	}
    
    
    create_drive_direct(-100,-100);
    wait_for_milliseconds(2000);
    create_stop();
    
     counter= 1100;
	set_servo_position(0,counter);
	while(counter<1200)
	{
		msleep(50);
		counter=counter +10;
		set_servo_position(0,counter);
	}
    counter= 1700;
	set_servo_position(3,counter);
	while(counter>1500)
	{
		msleep(50);
		counter=counter -10;
		set_servo_position(3,counter);
	}
    counter= 1200;
	set_servo_position(0,counter);
	while(counter<1350)
	{
		msleep(50);
		counter=counter +10;
		set_servo_position(0,counter);
	}
   counter= 1500;
	set_servo_position(3,counter);
	while(counter>1200)
	{
		msleep(50);
		counter=counter -10;
		set_servo_position(3,counter);
	} 
    create_drive_direct(0,-100);
    wait_for_milliseconds(500);
    create_stop();
    set_servo_position(3,140);
    set_servo_position(0,1764);
    msleep(1000);
    create_drive_direct(-100,-100);
    wait_for_milliseconds(4200);
    create_stop();
    create_drive_direct(-100,0);
    wait_for_milliseconds(720);
    create_stop();
    create_drive_direct(-100,-100);
    wait_for_milliseconds(1300);
    create_stop();
    set_servo_position(0,1350);
    counter= 140;
	set_servo_position(3,counter);
	while(counter<1100)
	{
		msleep(50);
		counter=counter +10;
		set_servo_position(3,counter);
	} 
    create_stop();
    create_drive_direct(0,100);
    wait_for_milliseconds(410);
    create_stop();
    wait_for_milliseconds(500);
     counter= 1100;
	set_servo_position(3,counter);
	while(counter<1400)
	{
		msleep(50);
		counter=counter +10;
		set_servo_position(3,counter);
	} 
     create_stop();
    create_drive_direct(100,0);
    wait_for_milliseconds(370);
    create_stop();
    create_drive_direct(-100,-100);
    wait_for_milliseconds(2000);
    create_stop();
     counter= 1400;
	set_servo_position(3,counter);
	while(counter>1150)
	{
		msleep(50);
		counter=counter -10;
		set_servo_position(3,counter);
	} 
    create_drive_direct(-100,-100);
    wait_for_milliseconds(2000);
    create_stop();
     counter= 1150;
	set_servo_position(3,counter);
	while(counter>900)
	{
		msleep(50);
		counter=counter -10;
		set_servo_position(3,counter);
	} 
    create_drive_direct(-100,-100);
    wait_for_milliseconds(1000);
    create_stop();
     counter= 900;
	set_servo_position(3,counter);
	while(counter>400)
	{
		msleep(50);
		counter=counter -10;
		set_servo_position(3,counter);
	} 
    create_stop();
    create_drive_direct(-100,-100);
    wait_for_milliseconds(800);
    set_servo_position(0,1874);
    set_servo_position(3,400);
    msleep(500);
    create_stop();
    create_drive_direct(-100,100);
    wait_for_milliseconds(1050);
    create_stop();
    create_drive_direct(-100,-100);
    wait_for_milliseconds(2000);
    create_stop();
    create_drive_direct(100,-100);
    wait_for_milliseconds(1050);
    create_stop();
    create_drive_direct(-100,-100);
    wait_for_milliseconds(1000);
    create_stop();
    create_stop();
    return 0;
}
