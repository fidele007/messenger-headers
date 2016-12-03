/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:59 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/ASDisplayNode.h>
#import <Messenger/ASTextNodeDelegate.h>

@class ASDisplayNode, ASNetworkImageNode, FBFullBleedTextNode, NSString;

@interface FBEmailCTABannerNode : ASDisplayNode <ASTextNodeDelegate> {

	/*^block*/id _onPrivacyPolicyLinkPressed;
	ASDisplayNode* _insetContentContainer;
	ASNetworkImageNode* _profilePictureImageNode;
	ASNetworkImageNode* _publisherLogoImageNode;
	ASDisplayNode* _textContainer;
	FBFullBleedTextNode* _titleTextNode;
	FBFullBleedTextNode* _descriptionTextNode;
	FBFullBleedTextNode* _privacyPolicyNode;

}

@property (nonatomic,retain) ASDisplayNode * insetContentContainer;                     //@synthesize insetContentContainer=_insetContentContainer - In the implementation block
@property (nonatomic,retain) ASNetworkImageNode * profilePictureImageNode;              //@synthesize profilePictureImageNode=_profilePictureImageNode - In the implementation block
@property (nonatomic,retain) ASNetworkImageNode * publisherLogoImageNode;               //@synthesize publisherLogoImageNode=_publisherLogoImageNode - In the implementation block
@property (nonatomic,retain) ASDisplayNode * textContainer;                             //@synthesize textContainer=_textContainer - In the implementation block
@property (nonatomic,retain) FBFullBleedTextNode * titleTextNode;                       //@synthesize titleTextNode=_titleTextNode - In the implementation block
@property (nonatomic,retain) FBFullBleedTextNode * descriptionTextNode;                 //@synthesize descriptionTextNode=_descriptionTextNode - In the implementation block
@property (nonatomic,retain) FBFullBleedTextNode * privacyPolicyNode;                   //@synthesize privacyPolicyNode=_privacyPolicyNode - In the implementation block
@property (nonatomic,copy) id onPrivacyPolicyLinkPressed;                               //@synthesize onPrivacyPolicyLinkPressed=_onPrivacyPolicyLinkPressed - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGSize)sizeForViewModel:(id)arg1 constrainedSize:(CGSize)arg2 ;
-(void)_staticInitialize;
-(CGSize)calculateSizeThatFits:(CGSize)arg1 ;
-(void)textNode:(id)arg1 tappedLinkAttribute:(id)arg2 value:(id)arg3 atPoint:(CGPoint)arg4 textRange:(NSRange)arg5 ;
-(BOOL)textNode:(id)arg1 shouldHighlightLinkAttribute:(id)arg2 value:(id)arg3 atPoint:(CGPoint)arg4 ;
-(void)setInsetContentContainer:(ASDisplayNode *)arg1 ;
-(ASDisplayNode *)insetContentContainer;
-(void)setProfilePictureImageNode:(ASNetworkImageNode *)arg1 ;
-(ASNetworkImageNode *)profilePictureImageNode;
-(void)setPublisherLogoImageNode:(ASNetworkImageNode *)arg1 ;
-(ASNetworkImageNode *)publisherLogoImageNode;
-(void)setTitleTextNode:(FBFullBleedTextNode *)arg1 ;
-(FBFullBleedTextNode *)titleTextNode;
-(void)setDescriptionTextNode:(FBFullBleedTextNode *)arg1 ;
-(FBFullBleedTextNode *)descriptionTextNode;
-(void)setPrivacyPolicyNode:(FBFullBleedTextNode *)arg1 ;
-(FBFullBleedTextNode *)privacyPolicyNode;
-(id)linkifiedStringWithPrivacyPolicyMessage:(id)arg1 linkedSubstring:(id)arg2 ;
-(id)onPrivacyPolicyLinkPressed;
-(id)initWithViewModel:(id)arg1 imageDownloader:(id)arg2 ;
-(void)setOnPrivacyPolicyLinkPressed:(id)arg1 ;
-(void)layout;
-(ASDisplayNode *)textContainer;
-(void)setTextContainer:(ASDisplayNode *)arg1 ;
@end

