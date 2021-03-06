/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:28 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface FBDeviceDiscoveryBlobEntry : NSObject {

	BOOL _isSSDP;
	int _count;
	NSString* _originalBlob;
	NSString* _locationURL;
	NSString* _parentChildHash;

}

@property (nonatomic,copy) NSString * originalBlob;                 //@synthesize originalBlob=_originalBlob - In the implementation block
@property (assign,nonatomic) int count;                             //@synthesize count=_count - In the implementation block
@property (assign,nonatomic) BOOL isSSDP;                           //@synthesize isSSDP=_isSSDP - In the implementation block
@property (nonatomic,copy) NSString * locationURL;                  //@synthesize locationURL=_locationURL - In the implementation block
@property (nonatomic,copy) NSString * parentChildHash;              //@synthesize parentChildHash=_parentChildHash - In the implementation block
-(NSString *)originalBlob;
-(void)setOriginalBlob:(NSString *)arg1 ;
-(BOOL)isSSDP;
-(void)setIsSSDP:(BOOL)arg1 ;
-(NSString *)locationURL;
-(void)setLocationURL:(NSString *)arg1 ;
-(NSString *)parentChildHash;
-(void)setParentChildHash:(NSString *)arg1 ;
-(int)count;
-(void)setCount:(int)arg1 ;
@end

