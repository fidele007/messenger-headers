/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:50 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface FBDateFormatterResult : NSObject {

	NSString* _string;
	NSString* _accessibleString;
	long long _rule;

}

@property (nonatomic,copy,readonly) NSString * string;                        //@synthesize string=_string - In the implementation block
@property (nonatomic,copy,readonly) NSString * accessibleString;              //@synthesize accessibleString=_accessibleString - In the implementation block
@property (nonatomic,readonly) long long rule;                                //@synthesize rule=_rule - In the implementation block
+(id)compositeFormatResultWithString:(id)arg1 accessibleString:(id)arg2 ;
+(id)preFormatResultWithString:(id)arg1 accessibleString:(id)arg2 ;
+(id)postFormatResultWithString:(id)arg1 accessibleString:(id)arg2 ;
-(id)initWithString:(id)arg1 accessibleString:(id)arg2 rule:(long long)arg3 ;
-(NSString *)accessibleString;
-(NSString *)string;
-(long long)rule;
@end
