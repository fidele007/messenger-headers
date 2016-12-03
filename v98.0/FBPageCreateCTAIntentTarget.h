/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:07 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBIntentTarget.h>

@class NSString;

@interface FBPageCreateCTAIntentTarget : FBIntentTarget {

	NSString* _pageID;
	NSString* _pagePhoneNumber;
	NSString* _countryCode;
	NSString* _ctaType;
	NSString* _ctaLabel;
	NSString* _ctaID;
	unsigned long long _targetType;

}

@property (nonatomic,copy,readonly) NSString * pageID;                       //@synthesize pageID=_pageID - In the implementation block
@property (nonatomic,copy,readonly) NSString * pagePhoneNumber;              //@synthesize pagePhoneNumber=_pagePhoneNumber - In the implementation block
@property (nonatomic,copy,readonly) NSString * countryCode;                  //@synthesize countryCode=_countryCode - In the implementation block
@property (nonatomic,copy,readonly) NSString * ctaType;                      //@synthesize ctaType=_ctaType - In the implementation block
@property (nonatomic,copy,readonly) NSString * ctaLabel;                     //@synthesize ctaLabel=_ctaLabel - In the implementation block
@property (nonatomic,copy,readonly) NSString * ctaID;                        //@synthesize ctaID=_ctaID - In the implementation block
@property (nonatomic,readonly) unsigned long long targetType;                //@synthesize targetType=_targetType - In the implementation block
+(id)pageCreateCTATargetWithPageID:(id)arg1 pagePhoneNumber:(id)arg2 countryCode:(id)arg3 ctaType:(id)arg4 ctaLabel:(id)arg5 ctaID:(id)arg6 targetType:(unsigned long long)arg7 ;
-(id)fallbackURLs;
-(NSString *)ctaID;
-(NSString *)ctaType;
-(NSString *)pagePhoneNumber;
-(NSString *)ctaLabel;
-(unsigned long long)targetType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)countryCode;
-(NSString *)pageID;
@end

