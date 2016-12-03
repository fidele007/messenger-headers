/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:53 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBExperimentContext.h>

@class NSString;

@interface TODOFBLocalContrastFilterExperimentContext : FBExperimentContext {

	NSString* _filterParams;
	BOOL _enabled;
	BOOL _replaceAuto;

}

@property (nonatomic,copy) NSString * filterParams;              //@synthesize filterParams=_filterParams - In the implementation block
@property (assign,nonatomic) BOOL enabled;                       //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) BOOL replaceAuto;                   //@synthesize replaceAuto=_replaceAuto - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
+(unsigned)mobileconfigConfigSpecifier;
+(id)configurationName;
-(void)logExposure;
-(NSString *)filterParams;
-(BOOL)replaceAuto;
-(void)setFilterParams:(NSString *)arg1 ;
-(void)setReplaceAuto:(BOOL)arg1 ;
-(BOOL)enabled;
-(void)setEnabled:(BOOL)arg1 ;
@end
