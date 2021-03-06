/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:04 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBRichStoryBlockAdapter.h>

@class NSDictionary, FBMemComposedBlockWithEntities, FBRichStoryTextBlock, NSString;

@interface FBComposedBlockStoryBlockAdapter : NSObject <FBRichStoryBlockAdapter> {

	FBMemComposedBlockWithEntities* _composedBlock;
	FBRichStoryTextBlock* _storyBlock;
	long long _layoutDirection;

}

@property (assign,nonatomic) long long layoutDirection;                                 //@synthesize layoutDirection=_layoutDirection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSDictionary * presentationAttributes; 
+(BOOL)canAdaptDataModel:(id)arg1 ;
+(id)adapterWithDataModel:(id)arg1 toolbox:(id)arg2 ;
-(void)setLayoutDirection:(long long)arg1 ;
-(id)initWithComposedBlock:(id)arg1 ;
-(id)viewModel;
-(long long)layoutDirection;
-(NSDictionary *)presentationAttributes;
@end

