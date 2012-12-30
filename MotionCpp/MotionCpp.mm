//
//  MotionCpp.m
//  MotionCpp
//
//  Created by Mark Villacampa on 12/30/12.
//  Copyright (c) 2012 Mark Villacampa. All rights reserved.
//

#import "MotionCpp.h"

// Here we will include the Cpp header files where our classes are defined.
// Make sure you have currectly setup "Search Paths > Header Search Paths" under Build Settings
#include "myCppHeader.h"


@implementation MotionCpp

@synthesize myApp;

- (id)init
{
  self = [super init];
  if (self)
  {
    // We initialize our Cpp class and assign it to our instace variable
    self.myApp = new myCppClass;
  }

  return self;
}

// We create objc methods that map to the different Cpp methods
- (void) myObjcMethod
{
  self.myApp->MyCppMethod();
}

@end