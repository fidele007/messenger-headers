/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:07 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBAutoupdaterUnarchiverDelegate <NSObject>
@required
-(void)autoupdaterUnarchiver:(id)arg1 didStartUpdate:(id)arg2;
-(void)autoupdaterUnarchiver:(id)arg1 didFinishUpdate:(id)arg2;
-(BOOL)autoupdaterUnarchiver:(id)arg1 update:(id)arg2 shouldUnarchiveFile:(id)arg3 toPath:(id)arg4 crc32:(unsigned long long)arg5;
-(void)autoupdaterUnarchiver:(id)arg1 update:(id)arg2 didMakeProgress:(id)arg3;
-(void)autoupdaterUnarchiver:(id)arg1 update:(id)arg2 didFail:(id)arg3;

@end

