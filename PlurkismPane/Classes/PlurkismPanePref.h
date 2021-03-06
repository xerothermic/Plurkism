//Copyright 2010 Yi-Ta Chiang
//
//Licensed under the Apache License, Version 2.0 (the "License");
//you may not use this file except in compliance with the License.
//You may obtain a copy of the License at 
//
//http://www.apache.org/licenses/LICENSE-2.0

#import <PreferencePanes/PreferencePanes.h>
#import <CoreFoundation/CoreFoundation.h>
#import <Security/Security.h>
#import <CoreServices/CoreServices.h>
#import <WebKit/WebKit.h>
#import <WebKit/WebPolicyDelegate.h>
#import "Common.h"

#define KEY_PATH CFSTR("KEYPATH")

@interface PlurkismPanePref : NSPreferencePane
{
	IBOutlet NSTextField* userid;
	IBOutlet NSSecureTextField* pass;
	IBOutlet WebView* about;
	IBOutlet NSButton* debug;
	IBOutlet NSButton* autostart;
	BOOL has_autostart;
}
- (NSURL*) FindURLForbundleIdentifier:(NSString*) bundleIdentifier;
- (NSURL*) FindAndUpdateAPPLocation;
- (BOOL) willStartAtLogin;
- (void) setStartAtLogin:(BOOL)enabled;
- (CFPropertyListRef) getPrefValue:(CFStringRef)key withAPP:(CFStringRef)app andType:(CFTypeID)type;
- (void) mainViewDidLoad;

@end
