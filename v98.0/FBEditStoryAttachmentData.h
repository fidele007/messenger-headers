/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:13 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLInput.h>

@class FBAttachmentLink, FBAttachmentPhotoData, FBAttachmentVideoData;

@interface FBEditStoryAttachmentData : FBGraphQLInput {

	FBAttachmentLink* _link;
	FBAttachmentPhotoData* _photo;
	FBAttachmentVideoData* _video;

}

@property (nonatomic,copy) FBAttachmentLink * link;                    //@synthesize link=_link - In the implementation block
@property (nonatomic,copy) FBAttachmentPhotoData * photo;              //@synthesize photo=_photo - In the implementation block
@property (nonatomic,copy) FBAttachmentVideoData * video;              //@synthesize video=_video - In the implementation block
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(FBAttachmentLink *)link;
-(void)setLink:(FBAttachmentLink *)arg1 ;
-(void)setPhoto:(FBAttachmentPhotoData *)arg1 ;
-(FBAttachmentPhotoData *)photo;
-(FBAttachmentVideoData *)video;
-(void)setVideo:(FBAttachmentVideoData *)arg1 ;
@end

