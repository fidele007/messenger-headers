/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:54 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBExperimentContext.h>

@class NSString;

@interface FBMobileDRExperimentContext : FBExperimentContext {

	BOOL _showProductInfoView;
	BOOL _noMinPollcount;
	BOOL _showNewBeeper;
	BOOL _allowDuplicate;
	double _beeperDisplayTime;
	NSString* _storeOverlayText;
	NSString* _beeperText;
	NSString* _primaryBeeperText;
	NSString* _secondaryBeeperText;

}

@property (nonatomic,readonly) BOOL showProductInfoView;                         //@synthesize showProductInfoView=_showProductInfoView - In the implementation block
@property (nonatomic,readonly) BOOL noMinPollcount;                              //@synthesize noMinPollcount=_noMinPollcount - In the implementation block
@property (nonatomic,readonly) BOOL showNewBeeper;                               //@synthesize showNewBeeper=_showNewBeeper - In the implementation block
@property (nonatomic,readonly) BOOL allowDuplicate;                              //@synthesize allowDuplicate=_allowDuplicate - In the implementation block
@property (nonatomic,readonly) double beeperDisplayTime;                         //@synthesize beeperDisplayTime=_beeperDisplayTime - In the implementation block
@property (nonatomic,copy,readonly) NSString * storeOverlayText;                 //@synthesize storeOverlayText=_storeOverlayText - In the implementation block
@property (nonatomic,copy,readonly) NSString * beeperText;                       //@synthesize beeperText=_beeperText - In the implementation block
@property (nonatomic,copy,readonly) NSString * primaryBeeperText;                //@synthesize primaryBeeperText=_primaryBeeperText - In the implementation block
@property (nonatomic,copy,readonly) NSString * secondaryBeeperText;              //@synthesize secondaryBeeperText=_secondaryBeeperText - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
-(BOOL)allowDuplicate;
-(NSString *)beeperText;
-(NSString *)primaryBeeperText;
-(NSString *)secondaryBeeperText;
-(id)textForBarBeeper;
-(id)getPrimaryBeeperText;
-(id)getSecondaryBeeperText;
-(BOOL)showProductInfoView;
-(BOOL)noMinPollcount;
-(BOOL)showNewBeeper;
-(double)beeperDisplayTime;
-(NSString *)storeOverlayText;
@end

