/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:24 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface FBVideoUploadState : NSObject <NSCoding> {

	NSString* _composerId;
	NSString* _assetId;

}

@property (nonatomic,copy) NSString * composerId;              //@synthesize composerId=_composerId - In the implementation block
@property (nonatomic,copy) NSString * assetId;                 //@synthesize assetId=_assetId - In the implementation block
-(void)setAssetId:(NSString *)arg1 ;
-(NSString *)assetId;
-(NSString *)composerId;
-(void)setComposerId:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isValid;
@end
