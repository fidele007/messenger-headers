/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:48 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSString, NSURL;

@interface MNURLRedirectItem : FBValueObject <NSCopying> {

	NSArray* _applicationIdentifiers;
	NSString* _applicationName;
	NSURL* _redirectURL;
	NSString* _analyticsEventName;

}

@property (nonatomic,copy,readonly) NSArray * applicationIdentifiers;              //@synthesize applicationIdentifiers=_applicationIdentifiers - In the implementation block
@property (nonatomic,copy,readonly) NSString * applicationName;                    //@synthesize applicationName=_applicationName - In the implementation block
@property (nonatomic,copy,readonly) NSURL * redirectURL;                           //@synthesize redirectURL=_redirectURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * analyticsEventName;                 //@synthesize analyticsEventName=_analyticsEventName - In the implementation block
-(id)initWithApplicationIdentifiers:(id)arg1 applicationName:(id)arg2 redirectURL:(id)arg3 analyticsEventName:(id)arg4 ;
-(NSArray *)applicationIdentifiers;
-(NSString *)analyticsEventName;
-(NSURL *)redirectURL;
-(NSString *)applicationName;
@end

