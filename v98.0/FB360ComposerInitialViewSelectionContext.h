/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:53 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBExperimentContext.h>

@interface FB360ComposerInitialViewSelectionContext : FBExperimentContext {

	long long _preferedDimension;
	BOOL _isDownloadingBetterResolutionEnabled;
	BOOL _isInitialViewSelectionEnabled;

}

@property (assign,nonatomic) long long preferedDimension;                            //@synthesize preferedDimension=_preferedDimension - In the implementation block
@property (assign,nonatomic) BOOL isDownloadingBetterResolutionEnabled;              //@synthesize isDownloadingBetterResolutionEnabled=_isDownloadingBetterResolutionEnabled - In the implementation block
@property (assign,nonatomic) BOOL isInitialViewSelectionEnabled;                     //@synthesize isInitialViewSelectionEnabled=_isInitialViewSelectionEnabled - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
+(unsigned)mobileconfigConfigSpecifier;
+(id)configurationName;
-(void)logExposure;
-(BOOL)isDownloadingBetterResolutionEnabled;
-(BOOL)isInitialViewSelectionEnabled;
-(long long)preferedDimension;
-(void)setPreferedDimension:(long long)arg1 ;
-(void)setIsDownloadingBetterResolutionEnabled:(BOOL)arg1 ;
-(void)setIsInitialViewSelectionEnabled:(BOOL)arg1 ;
@end
