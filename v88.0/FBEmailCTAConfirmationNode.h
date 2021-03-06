/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:52 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/ASDisplayNode.h>

@class FBFullBleedTextNode, ASDisplayNode, ASNetworkImageNode;

@interface FBEmailCTAConfirmationNode : ASDisplayNode {

	FBFullBleedTextNode* _titleTextNode;
	FBFullBleedTextNode* _subtitleTextNode;
	ASDisplayNode* _imageContainer;
	ASDisplayNode* _emailIcon;
	ASNetworkImageNode* _profilePictureImageNode;
	ASNetworkImageNode* _publisherLogoImageNode;

}

@property (nonatomic,retain) FBFullBleedTextNode * titleTextNode;                       //@synthesize titleTextNode=_titleTextNode - In the implementation block
@property (nonatomic,retain) FBFullBleedTextNode * subtitleTextNode;                    //@synthesize subtitleTextNode=_subtitleTextNode - In the implementation block
@property (nonatomic,retain) ASDisplayNode * imageContainer;                            //@synthesize imageContainer=_imageContainer - In the implementation block
@property (nonatomic,retain) ASDisplayNode * emailIcon;                                 //@synthesize emailIcon=_emailIcon - In the implementation block
@property (nonatomic,retain) ASNetworkImageNode * profilePictureImageNode;              //@synthesize profilePictureImageNode=_profilePictureImageNode - In the implementation block
@property (nonatomic,retain) ASNetworkImageNode * publisherLogoImageNode;               //@synthesize publisherLogoImageNode=_publisherLogoImageNode - In the implementation block
+(CGSize)sizeForViewModel:(id)arg1 constrainedSize:(CGSize)arg2 ;
+(id)subtitleTextWithEmail:(id)arg1 ;
-(void)_staticInitialize;
-(CGSize)calculateSizeThatFits:(CGSize)arg1 ;
-(void)setProfilePictureImageNode:(ASNetworkImageNode *)arg1 ;
-(ASNetworkImageNode *)profilePictureImageNode;
-(void)setPublisherLogoImageNode:(ASNetworkImageNode *)arg1 ;
-(ASNetworkImageNode *)publisherLogoImageNode;
-(void)setTitleTextNode:(FBFullBleedTextNode *)arg1 ;
-(FBFullBleedTextNode *)titleTextNode;
-(id)initWithViewModel:(id)arg1 imageDownloader:(id)arg2 ;
-(void)setSelectedEmail:(id)arg1 ;
-(void)setSubtitleTextNode:(FBFullBleedTextNode *)arg1 ;
-(FBFullBleedTextNode *)subtitleTextNode;
-(void)setImageContainer:(ASDisplayNode *)arg1 ;
-(ASDisplayNode *)imageContainer;
-(void)setEmailIcon:(ASDisplayNode *)arg1 ;
-(ASDisplayNode *)emailIcon;
-(id)imageNodeWithURL:(id)arg1 imageDownloader:(id)arg2 ;
-(void)startTransitionAnimation;
-(void)layout;
@end

