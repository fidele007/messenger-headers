/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:58 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNPlatformAppActionFactory.h>

@class NSString;

@interface MNDisabledPlatformAppActionFactory : NSObject <MNPlatformAppActionFactory>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithAppInstallationChecker:(id)arg1 appScopedIdsCache:(id)arg2 ;
-(id)platformAppActionWithAppID:(id)arg1 appStoreID:(id)arg2 threadParticipants:(id)arg3 context:(unsigned long long)arg4 visibility:(unsigned long long)arg5 metadata:(id)arg6 ;
-(id)platformAppActionWithAttribution:(id)arg1 threadParticipants:(id)arg2 context:(unsigned long long)arg3 ;
-(id)platformAppActionForComposerExtensionIdentifier:(id)arg1 ;
-(id)_platformAppActionWithAppID:(id)arg1 appStoreID:(id)arg2 extraReplyURLParams:(id)arg3 visibility:(unsigned long long)arg4 ;
@end

