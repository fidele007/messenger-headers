/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:23 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <Messenger/FBObjectShallowCopyProtocol.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSArray, NSString;

@interface FBComposerCameraFramesInfo : FBValueObject <FBObjectShallowCopyProtocol, NSCopying, NSCoding> {

	NSArray* _preloadedFrames;
	unsigned long long _startingFrameIndex;

}

@property (nonatomic,copy,readonly) NSArray * preloadedFrames;                     //@synthesize preloadedFrames=_preloadedFrames - In the implementation block
@property (nonatomic,readonly) unsigned long long startingFrameIndex;              //@synthesize startingFrameIndex=_startingFrameIndex - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithPreloadedFrames:(id)arg1 startingFrameIndex:(unsigned long long)arg2 ;
-(NSArray *)preloadedFrames;
-(unsigned long long)startingFrameIndex;
-(id)shallowCopy;
@end
