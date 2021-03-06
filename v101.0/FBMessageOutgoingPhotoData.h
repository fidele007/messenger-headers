/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MNLocalPhotoInfo, NSURL, FBMessageOutgoingPhotoDataFormat;

@interface FBMessageOutgoingPhotoData : NSObject <NSCoding, NSCopying> {

	unsigned long long _subtype;
	MNLocalPhotoInfo* _local_localPhotoInfo;
	BOOL _local_isAnimated;
	NSURL* _remote_fullURL;
	NSURL* _remote_previewURL;
	BOOL _remote_fromTrustedSource;
	FBMessageOutgoingPhotoDataFormat* _remote_format;

}
+(id)localWithLocalPhotoInfo:(id)arg1 isAnimated:(BOOL)arg2 ;
+(id)remoteWithFullURL:(id)arg1 previewURL:(id)arg2 fromTrustedSource:(BOOL)arg3 format:(id)arg4 ;
-(void)matchLocal:(/*^block*/id)arg1 remote:(/*^block*/id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

