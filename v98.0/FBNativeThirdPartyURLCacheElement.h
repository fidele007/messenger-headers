/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:12 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSArray, NSDictionary;

@interface FBNativeThirdPartyURLCacheElement : NSObject {

	NSURL* _fbrpc;
	NSArray* _trackingCodes;
	NSArray* _trackingNodes;
	NSDictionary* _extras;

}

@property (nonatomic,retain) NSURL * fbrpc;                      //@synthesize fbrpc=_fbrpc - In the implementation block
@property (nonatomic,copy) NSArray * trackingCodes;              //@synthesize trackingCodes=_trackingCodes - In the implementation block
@property (nonatomic,copy) NSArray * trackingNodes;              //@synthesize trackingNodes=_trackingNodes - In the implementation block
@property (nonatomic,copy) NSDictionary * extras;                //@synthesize extras=_extras - In the implementation block
-(void)setExtras:(NSDictionary *)arg1 ;
-(NSDictionary *)extras;
-(NSArray *)trackingCodes;
-(void)setTrackingCodes:(NSArray *)arg1 ;
-(NSArray *)trackingNodes;
-(NSURL *)fbrpc;
-(void)setFbrpc:(NSURL *)arg1 ;
-(void)setTrackingNodes:(NSArray *)arg1 ;
@end

