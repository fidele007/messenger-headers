/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:22 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBNativeArticleAdapter.h>

@protocol FBViewModelAdapterToolbox;
@class FBViewModelAdapterRegistry, FBMemInstantArticleVersion, NSOrderedSet, FBRichStoryStyleSheet, FBRichStoryPresentationState, FBRichStoryViewModel, NSArray, NSString;

@interface FBInstantArticleVersionAdapter : NSObject <FBNativeArticleAdapter> {

	FBViewModelAdapterRegistry* _adapterRegistry;
	FBMemInstantArticleVersion* _articleVersion;
	NSOrderedSet* _contributors;
	FBRichStoryStyleSheet* _fallbackStyleSheet;
	long long _layoutDirection;
	FBRichStoryPresentationState* _presentationState;
	FBRichStoryStyleSheet* _styleSheet;
	FBRichStoryViewModel* _story;
	NSArray* _thirdPartyTrackers;
	id<FBViewModelAdapterToolbox> _toolbox;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)canAdaptDataModel:(id)arg1 ;
+(id)adapterWithDataModel:(id)arg1 toolbox:(id)arg2 ;
-(id)shareable;
-(id)publisherName;
-(id)fallbackStyleSheet;
-(id)thirdPartyTrackers;
-(id)publisherID;
-(id)initWithArticleVersion:(id)arg1 toolbox:(id)arg2 ;
-(void)_generateViewModelIfNecessary;
-(id)contributors;
-(id)viewModel;
-(id)styleSheet;
-(id)presentationState;
@end
