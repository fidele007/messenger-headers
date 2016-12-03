/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:07 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBIntentTarget.h>

@class NSString, NSURL;

@interface FBAccountKitIntentTarget : FBIntentTarget {

	NSString* _confirmationCode;
	NSURL* _fallbackURL;

}

@property (nonatomic,copy,readonly) NSString * confirmationCode;              //@synthesize confirmationCode=_confirmationCode - In the implementation block
@property (nonatomic,copy,readonly) NSURL * fallbackURL;                      //@synthesize fallbackURL=_fallbackURL - In the implementation block
+(id)accountKitTargetWithConfirmationCode:(id)arg1 fallbackURL:(id)arg2 ;
-(NSString *)confirmationCode;
-(id)fallbackURLs;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSURL *)fallbackURL;
@end

