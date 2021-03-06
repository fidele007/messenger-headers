/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSString, NSNumber;

@interface FBAnalyticsAdSpacingInvalidationData : NSObject {

	NSArray* _trackingCodes;
	NSString* _source;
	NSNumber* _spacingGap;

}

@property (nonatomic,copy) NSArray * trackingCodes;              //@synthesize trackingCodes=_trackingCodes - In the implementation block
@property (nonatomic,copy) NSString * source;                    //@synthesize source=_source - In the implementation block
@property (nonatomic,retain) NSNumber * spacingGap;              //@synthesize spacingGap=_spacingGap - In the implementation block
-(NSArray *)trackingCodes;
-(void)setTrackingCodes:(NSArray *)arg1 ;
-(NSNumber *)spacingGap;
-(void)setSpacingGap:(NSNumber *)arg1 ;
-(void)setSource:(NSString *)arg1 ;
-(NSString *)source;
@end

