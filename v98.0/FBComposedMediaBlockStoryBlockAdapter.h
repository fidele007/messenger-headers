/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:04 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBRichStoryBlockAdapter.h>

@class FBMemComposedBlockWithEntities, FBRichStoryEntityBlock, NSString, NSDictionary;

@interface FBComposedMediaBlockStoryBlockAdapter : NSObject <FBRichStoryBlockAdapter> {

	FBMemComposedBlockWithEntities* _composedBlock;
	FBRichStoryEntityBlock* _storyBlock;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSDictionary * presentationAttributes; 
@property (assign,nonatomic) long long layoutDirection; 
+(BOOL)canAdaptDataModel:(id)arg1 ;
+(id)adapterWithDataModel:(id)arg1 toolbox:(id)arg2 ;
-(id)initWithComposedBlock:(id)arg1 ;
-(id)viewModel;
-(NSDictionary *)presentationAttributes;
@end

