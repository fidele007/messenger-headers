/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:54 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNLoggedOutURLHandling.h>

@class NSArray, NSString;

@interface MNLoggedOutURLHandler : NSObject <MNLoggedOutURLHandling> {

	NSArray* _urlHandlers;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)handleOpenURL:(id)arg1 sourceApplication:(id)arg2 appSession:(id)arg3 ;
-(BOOL)openURLs:(id)arg1 options:(id)arg2 appSession:(id)arg3 ;
-(id)initWithURLHandlers:(id)arg1 ;
@end

