/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <Messenger/FBMessageSingleAttachmentContentDedupable.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString, FBMessageOutgoingPhotoData, NSDate;

@interface FBMessageSinglePhotoAttachmentContent : FBValueObject <FBMessageSingleAttachmentContentDedupable, NSCopying, NSCoding> {

	BOOL _renderAsSticker;
	NSString* _offlinePhotoId;
	double _width;
	double _height;
	long long _attachmentType;
	FBMessageOutgoingPhotoData* _photoData;
	NSDate* _createdTime;

}

@property (nonatomic,copy,readonly) NSString * offlinePhotoId;                           //@synthesize offlinePhotoId=_offlinePhotoId - In the implementation block
@property (nonatomic,readonly) double width;                                             //@synthesize width=_width - In the implementation block
@property (nonatomic,readonly) double height;                                            //@synthesize height=_height - In the implementation block
@property (nonatomic,readonly) long long attachmentType;                                 //@synthesize attachmentType=_attachmentType - In the implementation block
@property (nonatomic,readonly) BOOL renderAsSticker;                                     //@synthesize renderAsSticker=_renderAsSticker - In the implementation block
@property (nonatomic,copy,readonly) FBMessageOutgoingPhotoData * photoData;              //@synthesize photoData=_photoData - In the implementation block
@property (nonatomic,copy,readonly) NSDate * createdTime;                                //@synthesize createdTime=_createdTime - In the implementation block
-(BOOL)renderAsSticker;
-(id)initWithOfflinePhotoId:(id)arg1 width:(double)arg2 height:(double)arg3 attachmentType:(long long)arg4 renderAsSticker:(BOOL)arg5 photoData:(id)arg6 createdTime:(id)arg7 ;
-(NSString *)offlinePhotoId;
-(NSDate *)createdTime;
-(id)dedupeKey;
-(id)_defaultDedupeKey;
-(long long)attachmentType;
-(double)width;
-(double)height;
-(FBMessageOutgoingPhotoData *)photoData;
@end

