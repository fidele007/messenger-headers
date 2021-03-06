/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:44 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBAutoupdaterPreparer.h>

@class NSArray, NSString;

@interface FBAutoupdaterCompositePreparer : NSObject <FBAutoupdaterPreparer> {

	NSArray* _preparers;

}

@property (nonatomic,copy) NSArray * preparers;                     //@synthesize preparers=_preparers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)prepareUpdate:(id)arg1 atPath:(id)arg2 error:(id*)arg3 ;
-(id)initWithPreparers:(id)arg1 ;
-(NSArray *)preparers;
-(void)setPreparers:(NSArray *)arg1 ;
@end

