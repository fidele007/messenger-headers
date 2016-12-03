/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:53 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBExperimentContext.h>

@class NSString;

@interface FBMobileDRExperimentContext : FBExperimentContext {

	NSString* _storeOverlayText;
	NSString* _beeperTextSecondary;
	double _beeperDisplayTime;
	BOOL _noMinPollcount;
	BOOL _showProductInfoView;
	NSString* _beeperText;
	NSString* _beeperTextPrimary;
	BOOL _allowDuplicate;
	BOOL _showNewBeeper;

}

@property (nonatomic,copy) NSString * storeOverlayText;                 //@synthesize storeOverlayText=_storeOverlayText - In the implementation block
@property (nonatomic,copy) NSString * beeperTextSecondary;              //@synthesize beeperTextSecondary=_beeperTextSecondary - In the implementation block
@property (assign,nonatomic) double beeperDisplayTime;                  //@synthesize beeperDisplayTime=_beeperDisplayTime - In the implementation block
@property (assign,nonatomic) BOOL noMinPollcount;                       //@synthesize noMinPollcount=_noMinPollcount - In the implementation block
@property (assign,nonatomic) BOOL showProductInfoView;                  //@synthesize showProductInfoView=_showProductInfoView - In the implementation block
@property (nonatomic,copy) NSString * beeperText;                       //@synthesize beeperText=_beeperText - In the implementation block
@property (nonatomic,copy) NSString * beeperTextPrimary;                //@synthesize beeperTextPrimary=_beeperTextPrimary - In the implementation block
@property (assign,nonatomic) BOOL allowDuplicate;                       //@synthesize allowDuplicate=_allowDuplicate - In the implementation block
@property (assign,nonatomic) BOOL showNewBeeper;                        //@synthesize showNewBeeper=_showNewBeeper - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
+(unsigned)mobileconfigConfigSpecifier;
+(id)configurationName;
-(void)logExposure;
-(BOOL)allowDuplicate;
-(double)beeperDisplayTime;
-(NSString *)beeperText;
-(NSString *)beeperTextPrimary;
-(NSString *)beeperTextSecondary;
-(BOOL)noMinPollcount;
-(BOOL)showNewBeeper;
-(BOOL)showProductInfoView;
-(NSString *)storeOverlayText;
-(void)setStoreOverlayText:(NSString *)arg1 ;
-(void)setBeeperTextSecondary:(NSString *)arg1 ;
-(void)setBeeperDisplayTime:(double)arg1 ;
-(void)setNoMinPollcount:(BOOL)arg1 ;
-(void)setShowProductInfoView:(BOOL)arg1 ;
-(void)setBeeperText:(NSString *)arg1 ;
-(void)setBeeperTextPrimary:(NSString *)arg1 ;
-(void)setAllowDuplicate:(BOOL)arg1 ;
-(void)setShowNewBeeper:(BOOL)arg1 ;
@end

