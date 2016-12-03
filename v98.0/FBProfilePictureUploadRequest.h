/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:05 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBNetworkerRequest.h>

@class FBJPEGImageAttachment, NSString, NSDictionary;

@interface FBProfilePictureUploadRequest : FBNetworkerRequest {

	BOOL _hasEditedPhotoWithUMG;
	FBJPEGImageAttachment* _imageAttachment;
	NSString* _targetFBID;
	long long _expirationTime;
	NSString* _stickerID;
	NSString* _caption;
	NSString* _sourcePhotoID;
	NSString* _deepLinkAppId;
	NSString* _deepLinkSourceApplication;
	NSDictionary* _deepLinkMetadata;

}

@property (nonatomic,retain) FBJPEGImageAttachment * imageAttachment;              //@synthesize imageAttachment=_imageAttachment - In the implementation block
@property (nonatomic,copy) NSString * targetFBID;                                  //@synthesize targetFBID=_targetFBID - In the implementation block
@property (assign,nonatomic) long long expirationTime;                             //@synthesize expirationTime=_expirationTime - In the implementation block
@property (nonatomic,copy) NSString * stickerID;                                   //@synthesize stickerID=_stickerID - In the implementation block
@property (assign,nonatomic) BOOL hasEditedPhotoWithUMG;                           //@synthesize hasEditedPhotoWithUMG=_hasEditedPhotoWithUMG - In the implementation block
@property (nonatomic,copy) NSString * caption;                                     //@synthesize caption=_caption - In the implementation block
@property (nonatomic,copy) NSString * sourcePhotoID;                               //@synthesize sourcePhotoID=_sourcePhotoID - In the implementation block
@property (nonatomic,copy) NSString * deepLinkAppId;                               //@synthesize deepLinkAppId=_deepLinkAppId - In the implementation block
@property (nonatomic,copy) NSString * deepLinkSourceApplication;                   //@synthesize deepLinkSourceApplication=_deepLinkSourceApplication - In the implementation block
@property (nonatomic,copy) NSDictionary * deepLinkMetadata;                        //@synthesize deepLinkMetadata=_deepLinkMetadata - In the implementation block
-(id)initWithImageAttachment:(id)arg1 callbackPerformer:(id)arg2 ;
-(id)networkRequest;
-(NSString *)targetFBID;
-(void)setTargetFBID:(NSString *)arg1 ;
-(FBJPEGImageAttachment *)imageAttachment;
-(NSString *)stickerID;
-(BOOL)hasEditedPhotoWithUMG;
-(NSString *)sourcePhotoID;
-(id)initWithImageAttachment:(id)arg1 expirationTime:(long long)arg2 stickerID:(id)arg3 hasEditedPhotoWithUMG:(BOOL)arg4 caption:(id)arg5 sourcePhotoID:(id)arg6 deeplinkAppId:(id)arg7 deepLinkSourceApplication:(id)arg8 deepLinkMetaData:(id)arg9 callbackPerformer:(id)arg10 ;
-(void)setTargetFBID:(id)arg1 accessTokenOverride:(id)arg2 ;
-(void)setStickerID:(NSString *)arg1 ;
-(void)setHasEditedPhotoWithUMG:(BOOL)arg1 ;
-(void)setSourcePhotoID:(NSString *)arg1 ;
-(void)setImageAttachment:(FBJPEGImageAttachment *)arg1 ;
-(void)setDeepLinkAppId:(NSString *)arg1 ;
-(void)setDeepLinkSourceApplication:(NSString *)arg1 ;
-(void)setDeepLinkMetadata:(NSDictionary *)arg1 ;
-(NSString *)deepLinkAppId;
-(NSString *)deepLinkSourceApplication;
-(NSDictionary *)deepLinkMetadata;
-(long long)expirationTime;
-(void)setExpirationTime:(long long)arg1 ;
-(NSString *)caption;
-(void)setCaption:(NSString *)arg1 ;
@end

