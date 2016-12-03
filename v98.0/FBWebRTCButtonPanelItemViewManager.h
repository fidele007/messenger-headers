/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:56 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@class NSArray, FBWebRTCButtonImageCache, FBCache, NSMutableDictionary;

@interface FBWebRTCButtonPanelItemViewManager : NSObject {

	NSArray* _activeItemViews;
	FBWebRTCButtonImageCache* _buttonImageCache;
	FBCache* _cache;
	NSMutableDictionary* _stateCache;
	BOOL _showLabels;
	/*^block*/id _itemViewTapHandler;
	long long _voicemailButtonType;
	unsigned long long _buttonSize;

}

@property (nonatomic,copy) id itemViewTapHandler;                                                 //@synthesize itemViewTapHandler=_itemViewTapHandler - In the implementation block
@property (assign,nonatomic) BOOL showLabels;                                                     //@synthesize showLabels=_showLabels - In the implementation block
@property (assign,getter=areVideoButtonsEnabled,nonatomic) BOOL videoButtonsEnabled; 
@property (assign,nonatomic) long long voicemailButtonType;                                       //@synthesize voicemailButtonType=_voicemailButtonType - In the implementation block
@property (assign,nonatomic) unsigned long long buttonSize;                                       //@synthesize buttonSize=_buttonSize - In the implementation block
-(void)setItemViewTapHandler:(id)arg1 ;
-(BOOL)buttonWithTypeCategoryIsEnabled:(unsigned long long)arg1 ;
-(BOOL)buttonWithTypeCategoryIsHighlighted:(unsigned long long)arg1 ;
-(BOOL)buttonWithTypeCategoryIsSelected:(unsigned long long)arg1 ;
-(BOOL)showLabels;
-(void)setShowLabels:(BOOL)arg1 ;
-(long long)voicemailButtonType;
-(void)setVoicemailButtonType:(long long)arg1 ;
-(id)cachedItemViewForButtonCollection:(unsigned long long)arg1 buttonType:(unsigned long long)arg2 ;
-(void)setButtonWithTypeCategory:(unsigned long long)arg1 enabled:(BOOL)arg2 ;
-(void)setButtonWithTypeCategory:(unsigned long long)arg1 highlighted:(BOOL)arg2 ;
-(void)setButtonWithTypeCategory:(unsigned long long)arg1 selected:(BOOL)arg2 ;
-(void)setShowLabels:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)itemViewForButtonCollection:(unsigned long long)arg1 buttonType:(unsigned long long)arg2 ;
-(void)markActiveItemViewCollection:(NSArray*)arg1 ;
-(void)resetHighlightedState;
-(unsigned long long)_stateForButton:(unsigned long long)arg1 ;
-(void)_setButtonTypeCategoryState:(unsigned long long)arg1 forButton:(unsigned long long)arg2 updateViews:(BOOL)arg3 ;
-(id)_cachedItemViewForButtonCollection:(unsigned long long)arg1 buttonType:(unsigned long long)arg2 key:(id*)arg3 ;
-(void)_updateItemView:(id)arg1 ;
-(void)_updateButtonStateFromItemView:(id)arg1 ;
-(void)_buttonTap:(id)arg1 ;
-(id)itemViewTapHandler;
-(void)_synchronizeButtonTypeCategoryState:(unsigned long long)arg1 forItemView:(id)arg2 ;
-(BOOL)areVideoButtonsEnabled;
-(void)setVideoButtonsEnabled:(BOOL)arg1 ;
-(id)init;
-(void)removeAllObjects;
-(void)setButtonSize:(unsigned long long)arg1 ;
-(unsigned long long)buttonSize;
@end

