/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:59 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBBackgroundDeallocatedObject.h>
#import <Messenger/FBBylineNodeDelegate.h>
#import <Messenger/FBRichStoryBlockController.h>

@protocol FBBylineNode;
@class ASDisplayNode, FBRichStoryBlockDisplayContext, FBRichStoryEntityMetadata, FBUserSession, FBNABlockAnalyticsLogger, NSString;

@interface FBMetadataBlockController : FBBackgroundDeallocatedObject <FBBylineNodeDelegate, FBRichStoryBlockController> {

	ASDisplayNode*<FBBylineNode> _bylineNode;
	unsigned long long _dateFormat;
	FBRichStoryBlockDisplayContext* _displayContext;
	FBRichStoryEntityMetadata* _metadata;
	FBUserSession* _session;
	long long _style;
	FBNABlockAnalyticsLogger* _analyticsLogger;

}

@property (nonatomic,readonly) FBNABlockAnalyticsLogger * analyticsLogger;              //@synthesize analyticsLogger=_analyticsLogger - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)layoutForStoryBlock:(id)arg1 constrainingSize:(CGSize)arg2 presentationAttributes:(id)arg3 displayContext:(id)arg4 ;
+(BOOL)blockControllerCanRenderStoryBlock:(id)arg1 presentationAttributes:(id)arg2 ;
+(id)blockControllerForStoryBlock:(id)arg1 presentationAttributes:(id)arg2 session:(id)arg3 displayContext:(id)arg4 ;
-(FBNABlockAnalyticsLogger *)analyticsLogger;
-(id)richStoryRenderable;
-(id)initWithStoryBlock:(id)arg1 presentationAttributes:(id)arg2 session:(id)arg3 displayContext:(id)arg4 ;
-(void)bylineNode:(id)arg1 didTapProfilePictureAtIndex:(unsigned long long)arg2 ;
@end

