/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:59 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/ASDisplayNode.h>

@class ASDisplayNode, FBInchWormingLoadingIndicator;

@interface FBNAHTMLEmbedLoadingOverlayNode : ASDisplayNode {

	unsigned char _state;
	ASDisplayNode* _overlayNode;
	FBInchWormingLoadingIndicator* _loadingIndicatorNode;

}

@property (nonatomic,readonly) ASDisplayNode * overlayNode;                                       //@synthesize overlayNode=_overlayNode - In the implementation block
@property (nonatomic,readonly) FBInchWormingLoadingIndicator * loadingIndicatorNode;              //@synthesize loadingIndicatorNode=_loadingIndicatorNode - In the implementation block
@property (assign,nonatomic) unsigned char state;                                                 //@synthesize state=_state - In the implementation block
-(void)_staticInitialize;
-(ASDisplayNode *)overlayNode;
-(FBInchWormingLoadingIndicator *)loadingIndicatorNode;
-(void)_updateLoadingIndicatorStyle;
-(unsigned char)state;
-(void)setState:(unsigned char)arg1 ;
-(void)layout;
@end
