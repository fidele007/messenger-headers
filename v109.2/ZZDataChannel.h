/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:45 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/ZZChannel.h>

@class NSURL, NSData;

@interface ZZDataChannel : NSObject <ZZChannel> {

	NSData* _allData;

}

@property (nonatomic,readonly) NSURL * URL; 
-(id)newInput:(out id*)arg1 ;
-(id)temporaryChannel:(out id*)arg1 ;
-(void)removeAsTemporary;
-(id)newOutput:(out id*)arg1 ;
-(BOOL)replaceWithChannel:(id)arg1 error:(out id*)arg2 ;
-(id)initWithData:(id)arg1 ;
-(NSURL *)URL;
@end

