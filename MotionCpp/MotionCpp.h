//
//  MotionCpp.h
//  MotionCpp
//
//  Created by Mark Villacampa on 12/30/12.
//  Copyright (c) 2012 Mark Villacampa. All rights reserved.
//

#import <Foundation/Foundation.h>

// We define our cpp class as a struct so that Xcode won't complaint about missing definitions if we dont include the .h file here
struct myCppClass;

@interface MotionCpp : NSObject
{
  // myApp is the instance variable that will hold our Cpp object
  // never EVER try to access this variable directly from RubyMotion, or it will crash
  myCppClass* myApp;
}


// We will define Objc methods that will call to the corresponding cpp methods. These can return primitive C or Objc types, but never Cpp class objects.
// For some reason, just having a reference in your ruby code to an objc method that would return a Cpp object will make the runtime go crazy and spit all kind of "missing stub" errors.
- (void)myObjcMethod;

@property struct myCppClass* myApp;

@end