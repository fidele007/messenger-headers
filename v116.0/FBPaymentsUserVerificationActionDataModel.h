/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:52 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSURL;

@interface FBPaymentsUserVerificationActionDataModel : FBValueObject <NSCopying> {

	NSString* _actionRequired;
	NSURL* _riskURL;

}

@property (nonatomic,copy,readonly) NSString * actionRequired;              //@synthesize actionRequired=_actionRequired - In the implementation block
@property (nonatomic,copy,readonly) NSURL * riskURL;                        //@synthesize riskURL=_riskURL - In the implementation block
-(id)initWithActionRequired:(id)arg1 riskURL:(id)arg2 ;
-(NSString *)actionRequired;
-(NSURL *)riskURL;
@end

