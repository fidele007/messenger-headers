/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:53 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBExperimentContext.h>

@interface FBRelatedGroupsChainingExperimentContext : FBExperimentContext {

	BOOL _show_after_join;
	BOOL _show_after_permalink;

}

@property (assign,nonatomic) BOOL show_after_join;                   //@synthesize show_after_join=_show_after_join - In the implementation block
@property (assign,nonatomic) BOOL show_after_permalink;              //@synthesize show_after_permalink=_show_after_permalink - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
+(unsigned)mobileconfigConfigSpecifier;
+(id)configurationName;
-(void)logExposure;
-(BOOL)show_after_join;
-(BOOL)show_after_permalink;
-(void)setShow_after_join:(BOOL)arg1 ;
-(void)setShow_after_permalink:(BOOL)arg1 ;
@end
