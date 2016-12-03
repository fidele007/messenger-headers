/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:14 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBItmsHandlerDelegate.h>
#import <Messenger/FBAutoUpdaterHandlerDelegate.h>

@class NSString;

@interface FBAlertUpdateViewController : NSObject <FBItmsHandlerDelegate, FBAutoUpdaterHandlerDelegate> {

	BOOL _verboseMode;

}

@property (assign,nonatomic) BOOL verboseMode;                      //@synthesize verboseMode=_verboseMode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)singleton;
-(void)itmsHandler:(id)arg1 shouldInstallUpdate:(id)arg2 callback:(/*^block*/id)arg3 ;
-(void)itmsHandler:(id)arg1 cancelledProcessingUpdate:(id)arg2 ;
-(void)autoUpdaterHandler:(id)arg1 shouldInstallUpdate:(id)arg2 callback:(/*^block*/id)arg3 ;
-(void)autoUpdaterHandler:(id)arg1 willBeginProcessingUpdate:(id)arg2 ;
-(void)autoUpdaterHandler:(id)arg1 willBeginStage:(unsigned long long)arg2 ;
-(void)autoUpdaterHandler:(id)arg1 didFinishProcessingUpdate:(id)arg2 error:(id)arg3 ;
-(BOOL)verboseMode;
-(void)setVerboseMode:(BOOL)arg1 ;
@end
