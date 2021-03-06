/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:54 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDictionary, NSArray;

@interface FBPlatformSharePublishingBundle : FBValueObject <NSCopying> {

	NSString* _ref;
	NSString* _actionType;
	NSDictionary* _actionParameters;
	NSDictionary* _actionPropertyToCreatedObjectType;
	NSArray* _ogMediaAttachmentsForUpload;
	NSArray* _ogMediaAttachmentsForDisplay;
	NSArray* _imageAttachments;

}

@property (nonatomic,copy,readonly) NSString * ref;                                                //@synthesize ref=_ref - In the implementation block
@property (nonatomic,copy,readonly) NSString * actionType;                                         //@synthesize actionType=_actionType - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * actionParameters;                               //@synthesize actionParameters=_actionParameters - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * actionPropertyToCreatedObjectType;              //@synthesize actionPropertyToCreatedObjectType=_actionPropertyToCreatedObjectType - In the implementation block
@property (nonatomic,copy,readonly) NSArray * ogMediaAttachmentsForUpload;                         //@synthesize ogMediaAttachmentsForUpload=_ogMediaAttachmentsForUpload - In the implementation block
@property (nonatomic,copy,readonly) NSArray * ogMediaAttachmentsForDisplay;                        //@synthesize ogMediaAttachmentsForDisplay=_ogMediaAttachmentsForDisplay - In the implementation block
@property (nonatomic,copy,readonly) NSArray * imageAttachments;                                    //@synthesize imageAttachments=_imageAttachments - In the implementation block
-(NSDictionary *)actionPropertyToCreatedObjectType;
-(NSArray *)imageAttachments;
-(NSArray *)ogMediaAttachmentsForUpload;
-(id)initWithRef:(id)arg1 actionType:(id)arg2 actionParameters:(id)arg3 actionPropertyToCreatedObjectType:(id)arg4 ogMediaAttachmentsForUpload:(id)arg5 ogMediaAttachmentsForDisplay:(id)arg6 imageAttachments:(id)arg7 ;
-(NSArray *)ogMediaAttachmentsForDisplay;
-(NSString *)ref;
-(NSDictionary *)actionParameters;
-(NSString *)actionType;
@end

