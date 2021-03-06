//
//  VSStyleSheet.h
//  VSStyleMac
//
//  Created by Steve Streza on 11/5/09.
//  Copyright 2009 __MyCompanyName__. All rights reserved.
//

#import "VSGlobal.h"

extern const NSString *VSStyleSheetChangedNotification;

@class VSStyle;

@interface VSStyleSheet : NSObject {
	NSMutableDictionary* _styles;
}

+ (id) styleSheet;

+ (NSArray *)allStyleSheets;
+ (VSStyleSheet*)globalStyleSheet;

+ (void)setGlobalStyleSheet:(VSStyleSheet*)styleSheet;

- (BOOL)isGlobalStyleSheet;
- (VSStyle*)styleWithSelector:(NSString*)selector;
@end
