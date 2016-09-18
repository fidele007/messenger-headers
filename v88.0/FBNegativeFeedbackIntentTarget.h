/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:03 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBIntentTarget.h>

@class NSString, NSArray;

@interface FBNegativeFeedbackIntentTarget : FBIntentTarget {

	NSString* _reportableContentGraphQLID;
	NSString* _location;
	NSArray* _trackingCodes;

}

@property (nonatomic,copy,readonly) NSString * reportableContentGraphQLID;              //@synthesize reportableContentGraphQLID=_reportableContentGraphQLID - In the implementation block
@property (nonatomic,copy,readonly) NSString * location;                                //@synthesize location=_location - In the implementation block
@property (nonatomic,copy,readonly) NSArray * trackingCodes;                            //@synthesize trackingCodes=_trackingCodes - In the implementation block
+(id)negativeFeedbackIntentTargetWithReportableContentGraphQLID:(id)arg1 location:(id)arg2 trackingCodes:(id)arg3 ;
-(id)fallbackURLs;
-(NSArray *)trackingCodes;
-(NSString *)reportableContentGraphQLID;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)location;
@end
