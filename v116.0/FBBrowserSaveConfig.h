/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:53 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FBBrowserSaveConfig : FBValueObject <NSCopying> {

	NSString* _saveConfirmationText;
	NSString* _unsaveConfirmationText;
	NSString* _loggingSurface;
	NSString* _dashboardReferrer;

}

@property (nonatomic,copy,readonly) NSString * saveConfirmationText;                //@synthesize saveConfirmationText=_saveConfirmationText - In the implementation block
@property (nonatomic,copy,readonly) NSString * unsaveConfirmationText;              //@synthesize unsaveConfirmationText=_unsaveConfirmationText - In the implementation block
@property (nonatomic,copy,readonly) NSString * loggingSurface;                      //@synthesize loggingSurface=_loggingSurface - In the implementation block
@property (nonatomic,copy,readonly) NSString * dashboardReferrer;                   //@synthesize dashboardReferrer=_dashboardReferrer - In the implementation block
-(id)initWithSaveConfirmationText:(id)arg1 unsaveConfirmationText:(id)arg2 loggingSurface:(id)arg3 dashboardReferrer:(id)arg4 ;
-(NSString *)saveConfirmationText;
-(NSString *)loggingSurface;
-(NSString *)unsaveConfirmationText;
-(NSString *)dashboardReferrer;
@end

