/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:03 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
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
-(NSArray *)trackingNodes;
-(void)setTrackingCodes:(NSArray *)arg1 ;
-(NSURL *)fbrpc;
-(void)setFbrpc:(NSURL *)arg1 ;
-(void)setTrackingNodes:(NSArray *)arg1 ;
@end
