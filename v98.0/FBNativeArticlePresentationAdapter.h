/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:58 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBRichStoryLayoutDescriptionGenerator.h>

@class FBNativeArticleLayout, FBRichStoryViewModel, NSString;

@interface FBNativeArticlePresentationAdapter : NSObject <FBRichStoryLayoutDescriptionGenerator> {

	FBNativeArticleLayout* _layout;
	FBRichStoryViewModel* _story;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithStoryViewModel:(id)arg1 interfaceGuide:(id)arg2 layoutDirection:(long long)arg3 ;
-(id)layoutDescriptionGenerator;
-(id)interactionRegistryForPresentationState:(id)arg1 ;
-(id)layoutDescriptionForViewModel:(id)arg1 presentationState:(id)arg2 displayContext:(id)arg3 ;
-(id)layoutDescriptionFromLayoutDescription:(id)arg1 withUpdatedBlock:(id)arg2 presentationAttributes:(id)arg3 displayContext:(id)arg4 ;
@end

