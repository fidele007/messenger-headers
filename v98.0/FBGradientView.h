/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:14 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <Messenger/FBUIConfigurable.h>

@class NSString;

@interface FBGradientView : UIView <FBUIConfigurable>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)newWithConfig:(id)arg1 ;
+(id)newWithColors:(id)arg1 ;
+(id)defaultFBUIConfig;
+(Class)layerClass;
-(void)oldConfig:(id)arg1 configDidChange:(id)arg2 ;
-(id)init;
-(id)_init;
-(id)config;
-(void)applyConfig:(id)arg1 ;
@end
